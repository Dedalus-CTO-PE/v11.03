create table webrshaf
(
wbrsfno     varchar2(8),
wbrssta     varchar2(1),
wbrssdt     varchar2(8),
wbrsstm     varchar2(8),
wbrsprg     varchar2(8),
wbrsdes     varchar2(50),
wbrsusr     varchar2(10),
wbrsrdt     varchar2(8),
wbrsrtm     varchar2(8),
wbrsbdt     varchar2(8),
wbrsbtm     varchar2(8),
wbrsbfl     number(1,0),
wbrstyp     number(1,0),
wbrserc     number(6,0),
wbrsprc     number(6,0),
wbrsutm     varchar2(8),
wbrsur1     varchar2(30),
wbrsur2     varchar2(30),
wbrsud1     varchar2(8),
wbrsud2     varchar2(8),
wbrsuy1     varchar2(1),
wbrsuy2     varchar2(1),
wbrsspa     varchar2(20),
lf          varchar2(1),
constraint webrsha1 primary key( 
wbrsfno)
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
create public synonym webrshaf for webrshaf;
create unique index webrsha2 on webrshaf
(
wbrssta,
wbrssdt,
wbrsstm,
wbrsfno
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index webrsha3 on webrshaf
(
wbrsusr,
wbrsfno
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
