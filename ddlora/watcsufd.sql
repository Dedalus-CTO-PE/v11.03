create table watcsuaf
(
wtcsdate    varchar2(6),
wtcsunit    varchar2(3),
wtcsprty    varchar2(3),
wtcsatyp    varchar2(3),
wtcsclss    varchar2(3),
wtcswlst    number(6,0),
wtcsbook    number(6,0),
wtcscura    number(6,0),
wtcsadwl    number(6,0),
wtcsadcn    number(6,0),
wtcsadmt    number(6,0),
wtcsbked    number(6,0),
wtcsdadm    number(6,0),
wtcswlad    number(6,0),
wtcswlbk    number(6,0),
wtcsspar    varchar2(30),
lf          varchar2(1),
constraint watcsua1 primary key( 
wtcsdate,
wtcsunit,
wtcsprty,
wtcsatyp,
wtcsclss)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watcsuaf for watcsuaf;
