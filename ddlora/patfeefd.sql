create table patfeepf
(
  feecat      varchar2(1) default ' ' not null,
  feedesc     varchar2(30) default ' ' not null,
  feepcen     number(6,2) default 0 not null,
  feespare    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfeep1 primary key( 
feecat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
