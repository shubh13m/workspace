from django.db import models

# Create your models here.

class Student(models.Model):
    SEX_CHOICES = [('M','Male'),('F','Female')]
    name = models.CharField(max_length=100)
    age = models.IntegerField(null=True)
    sex = models.CharField(choices=SEX_CHOICES, max_length=1, blank=True)
    admission_date = models.DateTimeField()
    enrolled_in = models.ManyToManyField('Subject',blank=True)


class Subject(models.Model):
    name = models.CharField(max_length=50)
    
    def __str__(self):
        return self.name
