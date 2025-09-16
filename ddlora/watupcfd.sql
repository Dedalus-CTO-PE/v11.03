create table watupcaf
(
wtupdate    varchar2(6),
wtupunit    varchar2(3),
wtupdoct    varchar2(6),
wtupopty    varchar2(3),
wtupnpty    varchar2(3),
wtupnumb    number(8,0),
wtupspar    varchar2(13),
lf          varchar2(1),
constraint watupca1 primary key( 
wtupdate,
wtupunit,
wtupdoct,
wtupopty,
wtupnpty)
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
create public synonym watupcaf for watupcaf;
