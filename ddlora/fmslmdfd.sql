create table fmslmdaf
(
  fmldledg    varchar2(2) default ' ' not null,
  fmldyear    varchar2(4) default ' ' not null,
  fmldperd    varchar2(2) default ' ' not null,
  fmldlno     varchar2(3) default ' ' not null,
  fmldline    varchar2(70) default ' ' not null,
  fmldspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmslmda1 primary key( 
fmldledg,
fmldyear,
fmldperd,
fmldlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
