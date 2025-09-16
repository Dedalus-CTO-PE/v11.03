create table fmsgrpaf
(
  fmgpcode    varchar2(3) default ' ' not null,
  fmgpdesc    varchar2(35) default ' ' not null,
  fmgpspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsgrpa1 primary key( 
fmgpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
