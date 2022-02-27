console.log('hello console')

let firstName = 'shubham';
const roi = 7;
//roi = 8;        not Allowed coz of const
let account = null;

console.log(firstName + " " + roi + " " + account) ;

/* --------------------*/

let student = {             // student object
    name : null,
    roll : null
};

console.log('Before : \n' + 'Name : ' + student.name + '\nRoll_no : ' + student.roll);

student.name = 'shubham';                 // accessing object's attribute
student['roll'] = 13;

console.log('After : \n' + 'Name : ' + student.name + '\n Roll_no : ' + student.roll);

/* --------------------*/

let classNo = [10,11,12];                 // array
classNo[3] = '12+';                       // multi type array. int and string. 
console.log(classNo);
console.log(classNo[2]);

/* --------------------*/

let x = 1;                      // operators
let y = ++x;
let z = (x == 2) ? x-- : ++y;
console.log(x + ' ' + y +' '+ z );


function calMax(a,b){
    return (a>b) ? a : b;
}
console.log(calMax(100,50));

/* --------------------*/

let rectangle = {                         // single object 
    width : null,
    height : null,
    area : function(){
        return this.width*this.height;
    }
};

rectangle.width = 10;
rectangle.height = 12;
console.log(rectangle.area());
 


// constructor functions for objects. have diff objects diff values.

function triangle(b,h){
    this.base = b,
    this.height = h,
    this.area = function(){
         console.log(this.base*this.height)
    }
}
const c1 = new triangle(2,3);
c1.area(); 
console.log(c1);


/* --------------------*/

// Reference and value.

let temp = 10;   //value
let temp1 = temp;

function incr(num){
    num++;
}

incr(temp);
console.log(temp1);
console.log(temp);

let temp2 = {value :10};   //ref
let temp3 = temp2;

function incr(obj){
    obj.value++;
}

incr(temp2);
console.log(temp3.value);
temp3.value++;
console.log(temp2.value);

/* --------------------*/

//  Eterating an object

for (let k in rectangle){
    console.log(k, rectangle[k]);
}

// copy object.

let rectangle1 = {}
for (let k in rectangle){
    rectangle1[k] = rectangle[k]
}

for(let k in rectangle1){
    console.log(rectangle1[k])
}

let rectangle2 = {...rectangle1};              // spread operator ...

/* --------------------*/

//  Math Object : for mathematical operations

console.log(Math.floor(Math.random()*100))          //randomly generate a two digit number.

/* --------------------*/

// Javascript string

const fname = 'shubham ';
const lname = new String('Pandey');
const username = fname.concat(' ',lname, ' ', 13);
console.log(username.split(' '))

// Multi line email string.

console.log(`Hi ${lname},${fname}, 
thanks for writing this.`)


/* --------------------*/

// Example1 : address object, city, street, zipcode and showAddress()

const address = {
    street : 12,
    city : 'Bhopal',
    zip : 123456,
}

function showAddress(){
    for(let k in address){
        console.log(k, address[k])
    }
}

showAddress();

// Constructor function to initialize object

function Address(street, city, zip){
    this.street = street;
    this.city = city,
    this.zip = zip
}

const addr1 = new Address(12,'Bhopal',123456)
console.log(addr1)

// areEqual function.
function areEqual(address, addr1){
    return address == addr1
}

function areSame(address, addr1){
    return (address.city === addr1.city) && (addr1.zip  === address.zip) && (addr1.street === address.street)
}

console.log(`Both same : ${areSame(address,addr1)} 
Both equal : ${areEqual(address,addr1)}`)


// Blog post object.

function blog() {
    this.title = 'Sample Title',
    this.body = 'Sample Body',
    this.author = 'Author',
    this.views = 0,
    this.comments= {
        cauthor : null,
        body : null
    }
    this.isLive = false 
}

const bp1 = new blog();
const bp2 = new blog();

bp1.title = 'mytitle';
bp1.body = `Hi Shubham 
Welcome!`
bp1.author = 'shubh13m'
bp1.views = 12
bp1.comments.cauthor = 'ca1'
bp1.comments.body = 'cpbody1'
bp1.isLive = true

console.log(bp1, bp2)

/* --------------------*/

// Arrays

const numbers = [3,4];

numbers.push(5,6,7);

numbers.unshift(2);        // add 2 in begining.

numbers.splice(0,0,1);     // add 1 at index 0 without deleting 0 items

numbers.splice(2,2);       // at index 2 delete two items add none.

numbers.splice(2,0,3,4,1);    // at index 2, delete none, add 3 and 4

numbers.pop();

console.log(numbers)

console.log(numbers.indexOf(5))
console.log(numbers.indexOf(7))
console.log(numbers.lastIndexOf(1))
console.log(numbers.includes(6))

/* --------------------*/

// Finding objects in array.
// using find and findIndex function

const classStudent = [
    {id : 0, name : ''},
    { id :1, name : 'shubham', marks : 100,},
    { id :2, name : 'pandey', marks: 100},
];

const missingStudent = 'pandey'

console.log(classStudent.find(function(classStudent){
    return classStudent.name == missingStudent;
}));


console.log(classStudent.findIndex( classSt => classSt.name == missingStudent ));


/* --------------------*/

//  Emptying an array

//numbers.length = 0

// join two array

const first = [6,1,2]
const second = [3,4,5]

console.log(first.concat(second))


// Using spread in array
const combine = [...first,...second]
console.log(combine)

// join array elements

console.log(first.join('-'))


// sort the array

console.log(first.sort());
console.log(second.reverse());

/* --------------------*/

// sorting array of objects 

console.log(classStudent.sort(function (a,b){
    if(a.name > b.name) return 1;
    return -1;
}))


/* --------------------*/

// filter and map method

const filteredSt = classStudent.filter(function (classStudent){
    return classStudent.id > 0 ;
})

const mapedSt = filteredSt.map(function (filteredSt){
    return 'Student : ' + filteredSt.id + ' i.e. ' 
                        + filteredSt.name + ' has '
                        + filteredSt.marks + 'marks\n'
})

console.log(mapedSt)



/* --------------------*/

// Excersise :

// Create array from min to max:

const numRangeArray  = []

function arrayFromRange(min, max){
    while(min<=max){
        numRangeArray.push(min);
        min++;
    }console.log(first.slice(0,0));
    return numRangeArray;
}

console.log(arrayFromRange(1,4));
console.log(arrayFromRange(-10,4));


// Create function to write search element:

function searchMyElement(arr, element){
    for (let item of arr){
        if(item == element) return true;
    }
    return false;
}

console.log(first)

console.log(searchMyElement(first,6));


console.log(first.slice(0,1));
console.log(first.slice(1,3));


// Movie title , rating

const movies = [
    {title : 'd', year : 2018, rating : 4.5},
    {title : 'c', year : 2018, rating : 4.7},
    {title : 'a', year : 2018, rating : 3},
    {title : 'b', year : 2017, rating : 4.5},
]

let filMovTitle = movies
    .filter(movies => (movies.year == 2018 && movies.rating > 4))
    .sort()
    .reverse()
    .map(movies => movies.title)
    
console.log(filMovTitle)    
    

/* --------------------*/

// function arguments

function myfoo(){
    let sum = 0;
    for(let temp of arguments){
        sum += temp
    }
    return sum
}

console.log(myfoo(1,2,2,4,1))


// rest operator in function arguments

function myfoo1(...args){
    return args
}

console.log(myfoo1(1,2,2,5))

//  getter and setters

const person = {
    fName : null,
    lName : null,
    get fullName(){
        return `${this.fName} ${this.lName}`
    },
    set fullName(value){
        const parts = value.split(' ');
        this.fName = parts[0]
        this.lName = parts[1]
    }
};

person.fullName = 'shubham pandey'
console.log(person)
console.log(person.fullName)

// try and catch


try{
myName = 'SP'
nameParts = myName.split(' ');

if (typeof myName != 'string')
    throw new Error('Value is not string');
if(nameParts.length != 2)
    throw new Error('Name cannot be split into fname and lname');
console.log(`Lname : ${nameParts[1]}, Fname : ${nameParts[0]}`)
}
catch(e){
    console.log(e);
}
