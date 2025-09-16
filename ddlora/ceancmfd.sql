create table ceancmaf
(
  cencbty     varchar2(3) default ' ' not null,
  cencspc     varchar2(3) default ' ' not null,
  cencpsc     varchar2(7) default ' ' not null,
  cencqty     number(8,2) default 0 not null,
  cencspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceancma1 primary key( 
cencbty,
cencspc,
cencpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
