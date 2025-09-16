//jsVersion  : V11.03.00
function CreatePatientMenu(MenuType) {
parent.content.PatientMenu.innerHTML='' +
'<table cellspacing=0 cellpadding=0 border=1 width=100%> ' +
'<form name=MenuSelection method=get> ' +
'<tr><td> ' +
'<select onChange=PMenuLinkTo(this) class=PMenuSelectList> ' +
'<option value=0>---- View ---- </option> ' +
'<option value="patweb98.pbl|01|003|0|0|0">Alerts & Notes</option> ' +
'<option value="oprweb01.pbl|04|001|0|0|0">Theatre Summary</option> ' +
'<option value="cliweb03.pbl|01|001|0|0|0">Results</option> ' +
'<option value="cliweb02.pbl|01|001|0|0|0">Observations </option> ' +
'<option value="eocweb01.pbl|01|001|0|0|0">Episodes of Care </option> ' +
'<option value="cliweb08.pbl|01|001|0|0|0">Correspondence </option> ' +
'<option value="patweb98.pbl|01|001|0|0|0">Admission Details</option> ' +
'<option value="patweb98.pbl|01|020|0|0|0">Local Visits</option> ' +
'<option value="patweb98.pbl|01|021|0|0|0">Bed Transfers</option> ' +
'<option value="patweb98.pbl|01|023|0|0|0">ICD Coding</option> ' +
'</select> ' +
' ' +
'<select onChange=PMenuLinkTo(this) class=PMenuSelectList> ' +
'<option value=0>---- Action ---- </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Collection </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Arrival </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Anaesthetic </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Surgical </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Recovery </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Departure </option> ' +
'</select> ' +
'<select onChange=PMenuLinkTo(this) class=PMenuSelectList> ' +
'<option value=0>---- Functions ---- </option> ' +
'<option value="patweb89.pbl|01|002|0|620|500">New Pre-Admission </option> ' +
'<option value="patweb98.pbl|01|020|0|620|500">Pre-Adm Previous </option> ' +
'<option value="patweb89.pbl|01|001|0|620|500">Admission </option> ' +
'<option value="patweb96.pbl|03|004|0|640|250">Transfer </option> ' +
'<option value="patweb96.pbl|05|001|0|640|330">Discharge </option> ' +
'</select> ' +
' ' +
'<select onChange=PMenuLinkTo(this) class=PMenuSelectList> ' +
'<option value=0>---- Labels & Forms ---- </option> ' +
'<option value="patweb98.pbl|01|008|1|430|250">Labels </option> ' +
'<option value="patweb71.pbl|01|001|1|550|450">Invoices </option> ' +
'<option value="patweb98.pbl|01|011|1|430|160">Forms </option> ' +
'<option value="patweb85.pbl|01|001|1|450|270">Medical Record Request</option> ' +
'</select> ' +
'</td></tr> ' +
'</form> ' +
'</table>' 
}
