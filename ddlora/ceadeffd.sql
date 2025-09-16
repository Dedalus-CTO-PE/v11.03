create table ceadefaf
(
  cededty     varchar2(1) default ' ' not null,
  cedespc     varchar2(3) default ' ' not null,
  cedepsc     varchar2(7) default ' ' not null,
  cedeqty1    number(8,2) default 0 not null,
  cedeqty2    number(8,2) default 0 not null,
  cedespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceadefa1 primary key( 
cededty,
cedespc,
cedepsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
