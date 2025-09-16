create table patsecrf
(
secpcod     varchar2(4),
secm        number(1,0),
seca        number(1,0),
secd        number(1,0),
secb        number(1,0),
seci        number(1,0),
secr        number(1,0),
sect        number(1,0),
secp        number(1,0),
sece        number(1,0),
secw        number(1,0),
seck        number(1,0),
secspar     varchar2(8),
ssecpcod    varchar2(4),
ssecm       number(1,0),
sseca       number(1,0),
ssecd       number(1,0),
ssecb       number(1,0),
sseci       number(1,0),
ssecr       number(1,0),
ssect       number(1,0),
ssecp       number(1,0),
ssece       number(1,0),
ssecw       number(1,0),
sseck       number(1,0),
lf          varchar2(1),
constraint patsecr1 primary key( 
secpcod)
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
create public synonym patsecrf for patsecrf;
