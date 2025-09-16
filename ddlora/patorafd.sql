create table patoraaf
(
  ptordate    varchar2(8) default ' ' not null,
  ptorfile    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patoraa1 primary key( 
ptordate,
ptorfile)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
