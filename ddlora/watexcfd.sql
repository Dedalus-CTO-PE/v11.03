create table watexcaf
(
wtxcnlv1    varchar2(10),
wtxcnlv2    varchar2(10),
wtxcnlv3    varchar2(10),
wtxcnlep    number(6,0),
wtxcntl1    number(16,4),
wtxcnmn1    number(14,2),
wtxcnmx1    number(14,2),
wtxcnsv1    number(16,4),
wtxcntl2    number(16,4),
wtxcnmn2    number(14,2),
wtxcnmx2    number(14,2),
wtxcnsv2    number(16,4),
wtxcntl3    number(16,4),
wtxcnmn3    number(14,2),
wtxcnmx3    number(14,2),
wtxcnsv3    number(16,4),
wtxcnspa    varchar2(39),
lf          varchar2(1),
constraint watexca1 primary key( 
wtxcnlv1,
wtxcnlv2,
wtxcnlv3)
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
create public synonym watexcaf for watexcaf;
