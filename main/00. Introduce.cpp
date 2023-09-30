
// sqrt(x): tính căn bậc 2 của x và trả về số double
// pow(x, y): tính giá trị x^y ---> trả về double
// abs(x): tính giá trị tuyệt đối của x
// cbrt(x): tính căn bậc 3 ---> trả về double
// ceil, floor,...

// -------------#2. Cấu trúc rẽ nhánh IF - ELSE -------------
// Nếu dùng "else if" thì đúng điều kiện nào thì sẽ kết thúc câu lệnh,
// nếu dùng "if" thì sẽ kiểm tra tất cả các điều kiện còn lại
// Shorthand: variable = (condition) ? expressionTrue : expressionFalse;
// Example: ( 5 > 4) ? printf("Dung") : printf("Sai");
// Kiểm tra kí tự là chữ số
// Kiểm tra kí tự là chữ in hoa
// Kiểm tra kí tự là chữ in thường
// Kiểm ra kí tự là chữ cái
// Chuyển kí tự từ in hoa sang in thường, ngược lại
// chữ thường và chữ in hoa lệch nhau 32 đơn vị 
// A - Z: 65 - 90
// a - z: 97 - 122
// 0 - 9: 48 - 57;

// -------------#3. Cấu trúc rẽ nhánh IF - ELSE -------------
// Kết thúc mỗi case cần thêm "break"
// có thể nhập các case nếu có chung câu lệnh
// goto: nhảy đến vị trí bất kì trong chương trình

// -------------#4. Giải thích chi tiết về vòng lặp -------------
// + For Loop
/*
	for (initializationStatement; testExpression; updateStatement)
	{
	statements inside the body of loop
	 }
*/

// continue: bỏ qua những câu lệnh bên dưới nó và tiếp tục chạy vòng lặp mới
// break: 


/* 2 vòng for lồng nhau
	for (int i = 0; i <= 5; i++)
	{
	for (int j = 0; j <= 6; j++) {
		printf("%d %d\n", i, j);
	}
}
		Kiểm tra vòng lặp bên ngoài i = 0, thỏa mãn điều kiện i <=5
		Chạy vòng lặp bên trong, kiểm tra j = 0, thỏa mãn điều kiện, tiếp tục chạy j = 2,3,4,5,6. Khi chạy đến j = 7 thì điều kiện sai và thoát khỏi vòng lặp
		Tiếp tục chạy với i = 1, chạy tương tự
*/

// + While - Do/While

// -------------#7. Mảng Một Chiều -------------
/*
	các bài toán liên quan
	1. Đếm số nguyên tố
	2. Tính tổng,...
*/

// -------------#8. Mảng Hai Chiều -------------

/*
	dataType nameArray[x][y]; // x hàng và y cột
	chỉ số hàng chạy từ: 0 --> x-1;
	chỉ số cột chạy từ: 0 --> y-1;

	cần chỉ định số lượng cột
	 void nhap(int a[][100], int m, int m)

	- Kiểm tra tính chất của phần từ trong mảng 2 chiều
	- Làm việc với các phần tử trên hàng, cột
	- Làm việc với tam giác trên, dưới, đường chiếu chính, đường chéo phụ
	- Ma trận xoáy ốc
	- Tổng, hiệu, tích,...

*/