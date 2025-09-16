create table pmstleaf
(
  pmtltitl    varchar2(4) default ' ' not null,
  pmtldesc    varchar2(30) default ' ' not null,
  pmtlactv    varchar2(1) default ' ' not null,
  pmtlspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmstlea1 primary key( 
pmtltitl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmstlea2 on pmstleaf
(
pmtldesc,
pmtltitl
)
  tablespace pas_indx; 
