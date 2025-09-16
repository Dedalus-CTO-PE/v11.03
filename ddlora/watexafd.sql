create table watexaaf
(
wtxanlv1    varchar2(10),
wtxanlep    number(6,0),
wtxantl1    number(16,4),
wtxanmn1    number(14,2),
wtxanmx1    number(14,2),
wtxansv1    number(16,4),
wtxantl2    number(16,4),
wtxanmn2    number(14,2),
wtxanmx2    number(14,2),
wtxansv2    number(16,4),
wtxantl3    number(16,4),
wtxanmn3    number(14,2),
wtxanmx3    number(14,2),
wtxansv3    number(16,4),
wtxanspa    varchar2(39),
lf          varchar2(1),
constraint watexaa1 primary key( 
wtxanlv1)
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
create public synonym watexaaf for watexaaf;
