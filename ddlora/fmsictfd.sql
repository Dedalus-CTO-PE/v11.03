create table fmsictaf
(
  fmicicd     varchar2(3) default ' ' not null,
  fmictty     varchar2(1) default ' ' not null,
  fmictfl     varchar2(2) default ' ' not null,
  fmictfa     varchar2(12) default ' ' not null,
  fmicttl     varchar2(2) default ' ' not null,
  fmictta     varchar2(12) default ' ' not null,
  fmicspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsicta1 primary key( 
fmicicd,
fmictty,
fmictfl,
fmictfa)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
