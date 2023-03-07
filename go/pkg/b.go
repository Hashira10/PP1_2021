package main
import "fmt"

type Employee interface{
	addPupils() bool
}
type Subject struct{
	name string
	teacher Teacher
}
type Teacher struct{
	fName string
	lName string
	age int
	class Class
}
type Pupils struct{
	fName string
	lName string
	age int
}

type Class struct{
	year int
	numOfPupils int
}


// check age
func(p Pupils) addPupils() bool{
	if p.age < 6{
		return false
	}
	return true
}
// check number of pupils in class
func(teacher Teacher) addPupils() bool{
	if teacher.class.numOfPupils >= 30{
		return false
	}
	return true
}
func addPupil(p Pupils, teacher Teacher) string{
	if p.addPupils() && teacher.addPupils(){
		return "Added"
		
	}
	return "Not added"
}
func main() {
	var Teacher1 Teacher
	var P Pupils
	var P2 Pupils
	var C Class
	C.year = 1
	C.numOfPupils = 21
	Teacher1.fName = "Pakizar"
	Teacher1.lName = "Shamoi"
	Teacher1.age = 32
	Teacher1.class = C
	P.fName = "Alina"
	P.lName = "Omarova"
	P.age = 7
	P2.fName = "Valeria"
	P2.lName = "Tsoy"
	P2.age = 4
	fmt.Println(addPupil(P,Teacher1))
	fmt.Println(addPupil(P2,Teacher1))
}