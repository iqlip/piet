console.log("Hello Iqlip");
// Today we learn variables in javascript
// var , let , const


// start with var
var Name = "iqlip";
var num;   // it show (undefined) in console because you do not declare the value of num variables
var a = ` I'm a cybersecurity enthusiast`;
console.log(Name ,num, a);

// Rules for creating JavaScript variables
/*
1. can not start with numbers
2. can start with letters , numbers , _ or $
3. Are case sensitive
*/
var _city = 'Delhi';
var $city = 'UK';
console.log(_city,$city);

// start const

const homie = 'hoody'; 
homie = 'tommy'; // you are not overright the value of variable in const it show you error
console.log(homie);

//const great;   // it show you syntax error , because you do not declare the value of variable


// most common programming case type:
/*
1. camelCase 
2. kebab-case 
3. snake_case 
4. PascalCase 
*/

// we use let in other file fun.js 