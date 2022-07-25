from django.shortcuts import render

# Create your views here.

def renderTemplate(request):
    return render(request, 'templatesApp/firstTemplate.html', {'firstname':'shubham', 'lastname':'pandey'})

def renderEmployee(request):
    mydict = {'id':123,'name':'shubham'}
    return render(request, 'templatesApp/employeeTemplate.html',mydict)
