// script.js

function modifyInput() {
    // الحصول على حقل الإدخال باستخدام معرفه
    const inputField = document.getElementById('input');
    
    // تعديل قيمة حقل الإدخال
    inputField.value = 'New Value';
    
    // تعديل خصائص أخرى لحقل الإدخال (مثل تغيير اللون أو الحجم)
    inputField.style.color = 'red';
    inputField.style.fontSize = '20px';
    
    // إضافة نص تلميحي جديد
    inputField.placeholder = 'Modified placeholder...';
}
