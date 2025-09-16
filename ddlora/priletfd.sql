create table priletaf
(
dprlenum    varchar2(3),
dprlelin    varchar2(3),
prletext    varchar2(70),
prlevarb    number(1,0),
prlembot    number(2,0),
prlemtop    number(2,0),
prleplen    number(3,0),
prleleft    number(2,0),
prletspa    varchar2(8),
lf          varchar2(1),
constraint priletr1 primary key( 
dprlenum,
dprlelin)
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
create public synonym priletaf for priletaf;
create unique index priletr2 on priletaf
(
dprlelin,
dprlenum
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
