create table watexdaf
(
wtxdnlv1    varchar2(10),
wtxdnlv2    varchar2(10),
wtxdnlv3    varchar2(10),
wtxdnlv4    varchar2(10),
wtxdnlep    number(6,0),
wtxdntl1    number(16,4),
wtxdnmn1    number(14,2),
wtxdnmx1    number(14,2),
wtxdnsv1    number(16,4),
wtxdntl2    number(16,4),
wtxdnmn2    number(14,2),
wtxdnmx2    number(14,2),
wtxdnsv2    number(16,4),
wtxdntl3    number(16,4),
wtxdnmn3    number(14,2),
wtxdnmx3    number(14,2),
wtxdnsv3    number(16,4),
wtxdnspa    varchar2(39),
lf          varchar2(1),
constraint watexda1 primary key( 
wtxdnlv1,
wtxdnlv2,
wtxdnlv3,
wtxdnlv4)
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
create public synonym watexdaf for watexdaf;
