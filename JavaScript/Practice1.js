//String
// const s = "Hello,World";

// console.log(s)
// console.log(s.length)

// console.log(s.toUpperCase());

// console.log(s.substr(0, 5).toUpperCase());

// const c = s.split(",");
// console.log(c);


//Arrays

// const fruits = ['Mango', 'Coconut', 'Banana', 10, true];
// fruits[5] = "Strawberry";
// fruits.push("Almonds");
// fruits.unshift("Blackberry");
// console.log(fruits);

// console.log(Array.isArray(fruits));
// console.log(fruits.indexOf("Mango"));


//Object Literals

// const person = {
//     firstName: "Venkatesh",
//     lastName: "Gunake",
//     age: 21,
//     hobbies: [ "Singing", "Programming", "Googling"],
//     address:{
//         street: "Daullat Vila",
//         city: "Matunga"
//     }
// }

// //Directly adding property
// person.email = "venkatesh181020021@gmail.com";

// console.log(person);

//     //De-Structuring ES6 feature

// const {firstName, lastName, address:{city}, hobbies} = person;

// console.log(firstName);
// console.log(lastName);
// console.log(city);
// console.log(hobbies);


//Arrays Of Objects

const todos = [
    {
        id: 1,
        text: "Take out trash",
        isCompleted: true
    },

    {
        id: 2,
        text: "Take Bath",
        isCompleted: true
    },

    {
        id: 3,
        text: "BreakFast Time",
        isCompleted: false
    }

]

console.log(todos);


//Data Stored in from of Json format. key are in string format
const todosJson = JSON.stringify(todos);
console.log(todosJson);

//simple for loop
for(let i=0; i<todos.length; ++i)
    console.log(todos[i])

//ES6 for loop
for(let todo of todos)
    console.log(todo);

//forEach silimar as normal for loop
todos.forEach(function(todo){
    console.log(todo);
});


//Map returs array
const todoText = todos.map(function(todo){
    return todo.text;
});
console.log(todoText);


//filter returns some restricted elements
const isCompleted = todos.filter(function(todo){

    if(todo.isCompleted)
        return todo;
});
console.log(isCompleted);


