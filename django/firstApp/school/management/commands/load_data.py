from csv import DictReader
from datetime import datetime

from django.core.management import BaseCommand

from school.models import Student, Subject
from pytz import UTC
    
DATETIME_FORMAT = '%d/%m/%Y %H:%M'

SUBJECT_NAMES = [
    'maths',
    'science',
    'computers',
]

class Command(BaseCommand):
    # Show this when the user types help
    help = "Loads data from pet_data.csv into our Pet model"

    def handle(self, *args, **options):
        if Student.objects.exists() or Subject.objects.exists():
            print('Data already loaded...exiting.')
            print('Error1')
            return
        print("Creating subject data")
        for subject_name in SUBJECT_NAMES:
            sub = Subject(name=subject_name)
            sub.save()
        print("Loading student data for subject available")
        for row in DictReader(open('./data.csv')):
            s1 = Student()
            s1.name = row['name']
            s1.age = row['age']
            s1.sex = row['sex']
            raw_admission_date = row['admission_date']
            admission_date = UTC.localize(
                datetime.strptime(raw_admission_date, DATETIME_FORMAT))
            s1.admission_date = admission_date
            s1.save()
            raw_enrolled_in = row['enrolled_in']
            enrolled_subject = [name for name in raw_enrolled_in.split(' | ') if name]
            for sub_name in enrolled_subject:
                sub = Subject.objects.get(name=sub_name)
                s1.enrolled_in.add(sub)
            s1.save()
