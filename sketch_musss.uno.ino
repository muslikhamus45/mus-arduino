int nilaiLDR = 0;            // variabel nilai awal untuk nilaiLDR
void setup(){
  pinMode(13, OUTPUT);          // menentukan LED pada pin 13 menjadi OUTPUT
  Serial.begin(9600);          // komunikasi Arduino ke Komputer
}
void loop(){
  nilaiLDR= analogRead(A2);      // menyimpan nilai yang dibaca dari LDR ke variabel nilaiLDR
  Serial.print("NilaiLDR= ");   // menampilkan teks nilaiLDR=
  Serial.println(nilaiLDR);    // menampilkan nilai dari nilaiLDR
  if(nilaiLDR < 500) {        // jika nilai dari LDR kurang dari 500
    digitalWrite(13, HIGH);  // lampu LED menyala
  }
  else  {                           
    digitalWrite(13, LOW);  // lampu LED mati
  }
}
