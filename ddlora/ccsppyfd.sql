create table ccsppyaf
(
  ccpppid     varchar2(8) default ' ' not null,
  ccppdes     varchar2(35) default ' ' not null,
  ccppeid     varchar2(4) default ' ' not null,
  ccpptim     varchar2(1) default ' ' not null,
  ccppare     varchar2(1) default ' ' not null,
  ccppct1     varchar2(3) default ' ' not null,
  ccppct2     varchar2(3) default ' ' not null,
  ccppct3     varchar2(3) default ' ' not null,
  ccppdn1     varchar2(35) default ' ' not null,
  ccppdn2     varchar2(35) default ' ' not null,
  ccppdn3     varchar2(35) default ' ' not null,
  ccppdn4     varchar2(35) default ' ' not null,
  ccppdn5     varchar2(35) default ' ' not null,
  ccppeps     number(1,0) default 0 not null,
  ccppne      number(1,0) default 0 not null,
  ccppbd      number(1,0) default 0 not null,
  ccppc1      number(1,0) default 0 not null,
  ccppc2      number(1,0) default 0 not null,
  ccppacc     number(1,0) default 0 not null,
  ccppthe     number(1,0) default 0 not null,
  ccppoth     number(1,0) default 0 not null,
  ccppalos    number(1,0) default 0 not null,
  ccppac1     number(1,0) default 0 not null,
  ccppac2     number(1,0) default 0 not null,
  ccppaacc    number(1,0) default 0 not null,
  ccppathe    number(1,0) default 0 not null,
  ccppaoth    number(1,0) default 0 not null,
  ccppbc1     number(1,0) default 0 not null,
  ccppbc2     number(1,0) default 0 not null,
  ccppbacc    number(1,0) default 0 not null,
  ccppbthe    number(1,0) default 0 not null,
  ccppboth    number(1,0) default 0 not null,
  ccppspa1    varchar2(80) default ' ' not null,
  ccppspa2    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsppya1 primary key( 
ccpppid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
