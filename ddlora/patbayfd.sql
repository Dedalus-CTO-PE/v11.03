create table patbaysf
(
  baycode     varchar2(3) default ' ' not null,
  bayur       varchar2(2) default ' ' not null,
  baydesc     varchar2(20) default ' ' not null,
  bayspar     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbays1 primary key( 
baycode,
bayur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patbays2 on patbaysf
(
bayur,
baycode
)
  tablespace pas_indx; 
