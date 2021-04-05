Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Button1.Text = "这是按钮"
        Button1.Height = Button1.Height + 10
        Button1.Width = Button1.Width + 10
        'Print(Button1.Width)
        'Print(Button1.Height)
    End Sub
End Class
