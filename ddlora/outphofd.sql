create table outphoaf
(
  ophdate     varchar2(8) default ' ' not null,
  ophdesc     varchar2(30) default ' ' not null,
  ophhosp     varchar2(3) default ' ' not null,
  ophspare    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outphoa1 primary key( 
ophdate,
ophhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outphoa2 on outphoaf
(
ophdesc,
ophdate,
ophhosp
)
  tablespace pas_indx; 
create unique index outphoa3 on outphoaf
(
ophhosp,
ophdate
)
  tablespace pas_indx; 
