selector : 
    element selector:   p{}
    id selector : #para1 {}
    class selector:  .center{} 
                    p.center{}
    universal for all html: *{}
    css grouping :  h1,p,div{}

background:
    background: rgba(0, 128, 0, 0.3)
    background-image: url("paper.gif");
     background-repeat: repeat-x; repeat-y;no-repeat;
    background-position: right top;
    background-attachment: fixed; scroll;

border:
    border-style: solid;
    border-width: 5px;
    border-color: red;
    border-top-style: dotted; 
    border-radius: 5px;

margin:
    margin-top: 5px;
    margin-right:10px;
    margin-bottom:5px;
    margin-left:10px;
    margin: auto;   // align horizontal
    margin: inherit;

similar to padding.

height:
    height: 100px;
    width : 500px;
    max-width: 100px;

text:
    color:
    background-color:
    text-align: left, right, center, justify;
    vertical-align:
    text-decoration: underline, overline, line-through;
    text-transform: uppercase, lowercase, capitalize;
    text-indent:
    letter-spacing:
    line-height:

Font:
    font-family:
    font-style: normal, italic, oblique;
    font-weight; normal, bold;
    font-size: 10px, 10 em, 1vw;

Links:
    a{color:pink;}
    a:link{}
    a:visited{}
    a:hover{}
    a:active{}
    text-decoration is used to remove underline from link;
    a:link{text-decoration:none;}

List:
    list-style-type: circle;
    list-style-type: square;
    list-style-image: url('image')
    list-style-position: outside, inside;
    list-style-type:none;

Table:
    table, th, td{ border: 1px solid; width:100%}
    border-collapse: collapse;
    text-align: center;
    vertical-align:
    padding:
    tr:hover{background-color:}
    tr:nth-child(even) {}
    Add a div with style="overflow-x:auto" to make it responsive;

Display:
    Block, starts in new line and takes full width.
    Inline, not in new line and takes width as necessary. <span>, <a>, <img>
    Flex, grid, inline-block
    None; used with JS to hide, show and recreate .

Max-width:
    max-width: 100px;
    margin: auto; // centers the object

Position:   static, relative, fixed, absolute.
    for fixed give position as well.
    postion : sticky; and top : 0px;

Overflow: visible, hidden, auto, scroll.
    overflow-x:
    overflow-y:

Float: left, right, none;
Clear: right, left, both, none, inherit;
Use oveflow:auto

Align:  
    margin : auto;
    text-align : center;

Combinators::
    space: decendant;   div p {}  // all p inside div;
    child : div > p {}  //p who are child of div
    next sibling: div + p {}    //immediates 
    subsequent : div ~ p {} // all next sibling


pseudo class:
    a:hover{},
    a.highlight:hover{}  // can be combined with normal class
    p:first-child{}
    p i:first-child{}
    p:first-child i{}

pseudo elements:
    p::first-line {}
    p::first-letter{}
    p.intro::first-letter{}
    p::after p::before
    p::marker   p::selection


Form:
    <form>
    <label for="fname"> First Name </label>
    <input type="text" name="fname">
    </form>

    add padding to input.
    add border color and radius

    input[type=text]:focus{
        background:
        border:
    }

    for image in input bar, 
    for animation, increase width on focus.

    textarea{
        resize:none;
    }
    <textarea>Some text...</textarea>

    Dropdown:
            <select id="country" name="country">
            <option value="ca">Canada</option>
            <option value="usa">USA</option>
            </select>

            select{}
    
    button:
    input[type=button], input[type=submit], input[type=reset] {

    }
    <input type="button" value="Button">
    <input type="reset" value="Reset">
    <input type="submit" value="Submit">

<link rel="stylesheet" href="style.css">

    Shadows:
        text-shadow: 2px,2px red -- horizontal, vertical
        box-shadow:

    Transform:
        transform: translate(50px, 100px);--  right and down
        rotate: rotate(20deg); clockwise
        scale(2,3) --- width, height.
        scaleX(2)  --  width;
        scaleY(3) -- height;
        skewX(20deg), skewY(20deg)
        rotateX(150deg)
        rotateY(150deg)
        rotateZ(150deg)

    transition:
        transition: width 2s;
        transition: width 2s, height 4s;
        transition: width 2s, height 2s, transform 2s;
        transition-delay: 1s;

    @keyframes example {
        0% {color:red;}
        50% {color:blue;}
        100% {color:green;}
    }
    div{ animation-name: example;
        animation-duration: 4s;
          animation-iteration-count: 2;
        animation-direction: alternate-reverse;}

    .fill {object-fit: fill;}
.contain {object-fit: contain;}
.cover {object-fit: cover;}


Media:
    orientation, max-height, min-height, height, max-width,min-width,width.


    @media not|only mediatype and (media feature) and (media feature){
        CSS-Code;
    }

    @media screen and (min-width: 480px) {
        #leftsidebar {width: 200px; float: left;}
        #main {margin-left: 216px;}
    }