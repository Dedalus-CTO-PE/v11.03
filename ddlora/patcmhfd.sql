create table patcmhaf
(
  ptcmourn    varchar2(8) default ' ' not null,
  ptcmnurn    varchar2(8) default ' ' not null,
  ptcmspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmha1 primary key( 
ptcmourn,
ptcmnurn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
