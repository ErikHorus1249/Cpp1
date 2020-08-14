Áp dụng phương pháp sinh để phân tích số nguyên dương N thành tổng các số nguyên dương
Posted on Tháng Một 6, 2012
Ví dụ: Với N=5 ta có

1. 5= 4+ 1
2. 5= 3+ 2
3. 5= 3+ 1+ 1
4. 5= 2+ 2+ 1
5. 5= 2+ 1+ 1+ 1
6. 5= 1+ 1+ 1+ 1+ 1

Với N=9 ta có

1.  9= 8+ 1
2.  9= 7+ 2
3.  9= 7+ 1+ 1
4.  9= 6+ 3
5.  9= 6+ 2+ 1
6.  9= 6+ 1+ 1+ 1
7.  9= 5+ 4
8.  9= 5+ 3+ 1
9.  9= 5+ 2+ 2
10. 9= 5+ 2+ 1+ 1
11. 9= 5+ 1+ 1+ 1+ 1
12. 9= 4+ 4+ 1
13. 9= 4+ 3+ 2
14. 9= 4+ 3+ 1+ 1
15. 9= 4+ 2+ 2+ 1
16. 9= 4+ 2+ 1+ 1+ 1
17. 9= 4+ 1+ 1+ 1+ 1+ 1
18. 9= 3+ 3+ 3
19. 9= 3+ 3+ 2+ 1
20. 9= 3+ 3+ 1+ 1+ 1
21. 9= 3+ 2+ 2+ 2
22. 9= 3+ 2+ 2+ 1+ 1
23. 9= 3+ 2+ 1+ 1+ 1+ 1
24. 9= 3+ 1+ 1+ 1+ 1+ 1+ 1
25. 9= 2+ 2+ 2+ 2+ 1
26. 9= 2+ 2+ 2+ 1+ 1+ 1
27. 9= 2+ 2+ 1+ 1+ 1+ 1+ 1
28. 9= 2+ 1+ 1+ 1+ 1+ 1+ 1+ 1
29. 9= 1+ 1+ 1+ 1+ 1+ 1+ 1+ 1+ 1

Phân tích:

Một cách phân tích N thành k số như sau:

N=X1+X2+..+Xk

Để tránh lặp lại cách phân tích ta quy ước như sau:

X1≥ X2 ≥ .. ≥ Xk ≥ 1

Nếu N được phân tích thành hai bộ: bộ X1+X2+..+Xp và bộ Y1+Y2+..+Yq (chú ý p có thể ≠ q)

Theo cách cách phân tích số 5 và số 10 ta có thể nhận thấy nếu bộ X đứng trước bộ Y trong tập sắp  thứ tự thì có nghĩa là ta tìm được 1 số t sao cho:

X1=Y1, X2 = Y2, .. , Xt-1 = Yt-1, Xt > Yt

==> cách phân tích có thứ tự nhỏ nhất là (N-1) +1 và cách phân tích có thứ tự lớn nhất là 1 +1 + 1 + .. + 1 (N số 1)

Bây giờ từ bộ X1+X2+..+Xk làm thế nào để ta tìm được bộ có thứ tự liền sau nó?

Để ý một chút ta thấy việc phân tích luôn được phân tích từ số đầu tiên khác 1 tính từ bên phải của bộ đã được phân tích:

+ Số đó sẽ được thay đổi thành giá trị mới = giá trị cũ – 1

+ Còn lại phần sau sẽ là phân tích thành các số nhỏ hơn hoặc bằng số đó.

Cụ thể như sau:

1) Tìm số đầu tiên tính từ phải sang trái Xi ≠ 1

2) Xi := Xi -1

3) Phân tích tổng k – i +1  thành tổng các số ≤ Xi (k-i số 1 và giá trị 1 được bỏ ra từ Xi)

Việc phân tích k -i + 1 thành tổng các số ≤ Xi được thực hiện theo nguyên tắc sau:

Sẽ phân tích k-i+1 thành (k-i+1) DIV Xi số bằng Xi (các số liền sau bằng Xi)

và thành cộng thêm số (k-i+1) MOD Xi nếu (k-i+1) MOD Xi ≠ 0

(Chú ý tính chất X1≥ X2 ≥ .. ≥ Xk ≥ 1; có nghĩa là những số sau số Xi chỉ lớn nhất là bằng Xi)

(Cũng giống như ta có k-i+1 cái kẹo bây giờ ta phát lần lượt cho mọi người với số kẹo lớn nhất là Xi chiếc, để đảm bảo tính chất ban đầu ta luôn phát cho những người được phát là Xi chiếc, –> đến người cuối cùng chỉ còn lại phần dư thôi, đấy là nếu mà còn có phần dư thì còn có mà phát)

Thủ tục sinh kế tiếp như sau:

Procedure sinh_ke_tiep;

Var i, j: integer;

.      tongcuoi: integer;

.      thuong, du: integer;

Begin

.    i := k;

.    while (i>0) and (x[i] =1) do dec(i);

.    if i= 0 then tiep_tuc := False

.    Else

.    Begin

.         x[i]:=x[i] – 1;

.        tongcuoi := (k-i) + 1;

.        thuong := tongcuoi DIV x[i];  {số lượng số = x[i]}

.        du := tongcuoi MOD x[i];

.        for j:= i+1 to i + thuong do x[j] := x[i];

.        k := i + thuong; {hiện tại tổng đang có i + thuong số}

.        if du <> 0 then begin k := k+1; x[k] := du end

.    End;

End;

Chú ý: Chúng ta luôn phân tích thành tổng của k số nên k phải khai báo là biến  toàn cục.

Chương trình:
