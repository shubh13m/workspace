# Django 

## MVT Pattern
Django is based on MVT pattern. 
* Model : connects with database.
* View : renders the page
* Template : static design.

## Setup 
* Install Django
* Install Mysql and MysqlWorkbench
* Launch Mysql workbench : set password for root.
* Install python mysqlclient.

## First Django Project
* Goto directory where you want to create project.
* In folder, `django-admin startproject firstProject`, enter.
* Open project in IDE.

### Files in project
* `__init__.py`  :  tells python that it is python package.
* `settings.py` : setting for middleware config and database config.
* `urls.py` : urls for each webpage
* `wsgi.py` : web server gateway interface. Deploy application for cloud deployment.
* `manage.py` : to run database migrations.

### Run project
To start the project, cd to directory where we have manage.py file.
`python3 manage.py runserver`
there is an inbuilt server in django. To change port for project use, `python3 manage.py runserver 7777`

## Create Django App
In project, you have to create an application. 
`python3 manage.py startapp firstApp`

### Files in django application
* admin.py : regisiter modules in this file.
* apps.py : app specific 
* models.py : data models
* tests.py : test
* views.py : saving fuctions or classes incoming from browser.

## Views
### function based view
`from django.http import HttpResponse`
`def display(request):`
    `return HttpResponse("<h1> My first Django APP</h1>")`

Create a url for our view in project urls.py by importing the view from firstApp.

`from firstApp import views`
`urlpatterns = [ path('hello/', views.display)]`

add path by giving a name for url and mentioning which function we need to use from views.py. 
Adding one more view for dateTime. For this we need to import dateTime module form python.
`import datetime` in views.py
write view specific code to get current datetime.

`def displayDateTime(request):`
    `dt = datetime.datetime.now()`
    `s = '<b> current time is </b> ' + str(dt)`
    `return HttpResponse(s)`

Adding url for datetime view in urls.py
`urlpatterns = [path('hello/', views.display), path('datetime/', view.didsplayDateTime)]`

## Application level URL

create urls.py file in each application and use only app specific paths. But you need to modify the urls.py file of project. Import include function, 
`from django.conf.urls import include`
 also modify the urlpattern, 
    `path('firstApp/', include('firstApp.urls')),`
    `path('quoteApp/', include('quoteApp.urls')),`


## Templates
Responsible for rendering the data.

### Create project with template settings.

* cd to Django project folder.
* `django-admin startproject templateDemo`
* cd templateDemo
* `python3 manage.py startapp templateApp`

Create a template direction in templateDemo project. We'll save all the templates for each app in this template directory.

* `mkdir template`
Add path for this template folder in settings.py of project templateDemo

### Create a template, view and url.
* make a firstTemplate.html page in templates/templatesApp
* write the html inside this page.
* go to views.py of project. Use render object.
* `def renderRequest(request)`
  `      return render(request, 'templateApp/firstTemplate.html')`
* create a url for this view. 
* `from templateApp import views`
    `path('firstTemplate', 'views.renderRequest')`

### Template tags
To dynamically fill data we can use tags in template which will be filled by views using dictonary data structure. Keys of shared dictionary will be used as tag. Use two curly braces as tags.

* `<h2>My username is : {{lastname}},{{firstname}}</h2>`
* `def renderTemplate(request):`
`    return render(request, 'templatesApp/firstTemplate.html', {'firstname':'shubham', 'lastname':'pandey'})` 

### Insert static files

To insert static files, images or css. 
* create a static folder in project.
* add that static folder in settings.py under static section.
`STATIC_URL = 'static/'`

`STATICFILES_DIRS = [`
`    os.path.join(BASE_DIR,STATIC_URL)`
`]`

* in static folder create new folder for images and add image to that.
Now we need to add this static to template.
Update you template. Add in top of html.
`{% load static %}`  // this will load the static content
* Add this image tag
<img src="{% static "images/gfg.png"%}"> 


## Steps to create a template project. PRODUCT_TEMPLATES
* create the project.
* cd to project and create the app.
* Add app into the INTALLED_APPS of settings.py
* inside project create static and template folder.
* Add the static and template refenrence into setting.py of project.
* Inside TEMPLATES >> DIRS : give path for template.
* In static section, Add STATICFILES_DIR = [<path>]
* Add pages for website to the template. index.html and products.html
* write the html code in these pages and also use static variables for dynamic data.
* goto views.py in app, and write the functions to render the data for template pages.
* use dictionary data structure with static var names as keys and render function in views.
* Next step is to write the URL for the pages and link views to them.
* import views from app
* add path and views.fuction name.

## Model

By default sqlite is the database that django uses. 

### Configure mysql database
Create a database using mysql workbench. And update the following fields.
        `'ENGINE': 'django.db.backends.mysql',`   // replace sqlite with mysql 
        `'NAME': 'employeedb',`                     // database name
        `'USER': 'root',`                           // give user
        `'PASSWORD': 'shubh!PAN@13'`                // give password of user.


### Creating a model for our data.
To create a table we need to create a model in models.py file of the application.
* create a class of the table name.
* Add fields and constraints into the class

<code>class Employee(models.Model):<br>
    firstName = models.CharField(max_length=30)<br>
    lastName = models.CharField(max_length=30)<br>
    salary = models.FloatField()<br>
    email = models.CharField(max_length=30)</code>


### Create table from models.
To create table, goto project directory. Use makemigrations command.
`python3 manage.py makemigrations`

Result :
Migrations for 'empApp':
  empApp/migrations/0001_initial.py
    - Create model Employee

To create the table, use migrate that will run all the migrations saved in migrations folder of the app.
`python3 manage.py migrate` 

You can also view the sql commands that are used based on the migrations. simply run 
`python3 manage.py sqlmigrate app <initalcode i.e. 0001>`

### Create view for model
* import model using. `from empApp.models import Employee`
<code>
def employeedata(request):
    employees = Employee.objects.all()
    empDict = {'employees':employees}
    return render(request,'empApp/employees.html',empDict)
</code>

### Create a template for empApp
* create employees.html
* Use {% for emp in employees %} to get all datarows.


### Create a Admin
* Create admin using this command. `python3 manage.py createsuperuser`
* give username and password.


## Django ORM : object relational model

For this we need to open shell in the project. `python3 manage.py shell`
*   Import the class from app. `from empApp.models import Employee`
*   Query set is generated. `qs = Employee.objects.all()`     // gives all records.
*   get the result for id=1 using get  `emp = Employee.objects.get(id=1)`
*   print salary of employee. `print(emp.salary)`


### WHERE clause in ORM
* Use filter function with clause to get the results.
* To get salary greater than equals to some value. Employee.objects.filter(salary__gte=1000)
* contains = 'shubham' : 
* in = [0,10]

### selecting coloumn 
* to select columns from results use values_list.
* specify the columns that you want to show in value_list.
`Employee.objects.all().values_list('firstName','salary')`

### Use aggregate functions
* to use aggregate functions import from django.db.models

`from django.db.models import Avg, Sum, Min, Max, Count`
`Employee. objects.all().aggregate(Sum('salary'))`

### Create and bulk create
* `Employee.objects.create(firstName='shubh', lastName='pandey',salary='15000',email='s13@g.c') `
* `bulk_create([Employee(..),])`

### Delete 
<code>
e = Employee.objects.get(id=1)
e.delete()
</code>

### Update Data
* Fetch the data. `e = Employee.objects.get(id=13)`
* Update. `e.firstName = "shubhas"`
* save. `e.save()`

### Orderby
use order_by('column') also use - before coumne name to order in reverse.


## Django Forms

### Create form

To create a form, goto you app and create a file. forms.py.
* Import Form class. `from django import forms`
* Specify the fields to be used in a class that extends the form class.

<code>
class userRegistrationForm(forms.Form):             # extends Form class defined in forms
    firstName=forms.CharField()
    lastName= forms.CharField()
    email= forms.CharField()
</code> 

* Create a template for the form.
* keep method as post. And use {{form.as_p}} to use form from view.

<code>
        <form method="post">
            {{form.as_p}}
        <input type=submit value=submit>
        </form>
</code>

*  In the views.py, import the form.
* define a method that returns the form as dictionary.

<code>
def userRegistartionView(request):
    form = forms.userRegistrationForm()
    return render(request,'formsDemo/userRegistartion.html',{'form':form})
</code>


### CSRF : Cross Site Request Forgery
Use CSRF tag to use csrf_token in the app. Mentioned in settings.py in middleware.
`{% csrf_token %}`

### Input type in forms
you can mention which type of input you want using the widget property in forms.py
<cdoe>
    firstName = forms.CharField(widget=forms.TextInput)
    lastName = forms.CharField(widget=forms.TextInput)
    email = forms.CharField(widget=forms.EmailInput)
</code>

By default all fields are required. To make any field optional make require attribute as False.
`lastName = forms.Charfield(required=False)`

### Custom clean method. Own input validators.
You can use in-built django validator or define own validator function.
To define own validator function it should start with `clean_<fieldname>`
<code>
this line uses in-built validator

from django.core import validators
firstName = forms.CharField(widget=forms.TextInput, validators=[validators.MinLengthValidator(2)])

def clean_firstName(self):
        inputFirstName = self.cleaned_data['firstName']
        if len(inputFirstName) > 15 :
            raise forms.ValidationError('Max length for firstName is 15 characters')
        return inputFirstName

    def clean_password(self):
        inputPassword = self.cleaned_data['password']
        if len(inputPassword) < 8 or len(inputPassword)>20 :
            raise forms.ValidationError('Password must be between 8 to 20 characters long.')
        return inputPassword
<code>


## Model Form

In models.py, create your class and add fields that you want to use.
`class Project(models.Model):`
`    name = models.CharField()`

* Create you form in forms.py.
`from django import forms`
`from modelForms import model`

* create a class that extends forms.ModelForm
* create a inner-class Meta that has fields and model.