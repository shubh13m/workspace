from queue import PriorityQueue
from django.db import models


# Create your models here.

class Project(models.model):
    startDate = models.DateField()
    endDate = models.DateField()
    name = models.CharField()
    assignedTo = models.CharField()
    priority = models.IntegerField()
    