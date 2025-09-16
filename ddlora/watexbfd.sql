create table watexbaf
(
wtxbnlv1    varchar2(10),
wtxbnlv2    varchar2(10),
wtxbnlep    number(6,0),
wtxbntl1    number(16,4),
wtxbnmn1    number(14,2),
wtxbnmx1    number(14,2),
wtxbnsv1    number(16,4),
wtxbntl2    number(16,4),
wtxbnmn2    number(14,2),
wtxbnmx2    number(14,2),
wtxbnsv2    number(16,4),
wtxbntl3    number(16,4),
wtxbnmn3    number(14,2),
wtxbnmx3    number(14,2),
wtxbnsv3    number(16,4),
wtxbnspa    varchar2(39),
lf          varchar2(1),
constraint watexba1 primary key( 
wtxbnlv1,
wtxbnlv2)
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
create public synonym watexbaf for watexbaf;
