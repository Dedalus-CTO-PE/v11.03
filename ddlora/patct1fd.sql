create table patct1cf
(
  ctcpost     varchar2(8) default ' ' not null,
  ctccode     varchar2(3) default ' ' not null,
  ctclga      varchar2(4) default ' ' not null,
  ctcspar     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patct1c1 primary key( 
ctcpost)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patct1c2 on patct1cf
(
ctccode,
ctcpost
)
  tablespace pas_indx; 
create unique index patct1c3 on patct1cf
(
ctclga,
ctcpost
)
  tablespace pas_indx; 
