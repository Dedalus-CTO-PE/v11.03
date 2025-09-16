create table fmsnrkxx
(
  fmnkrept    varchar2(3) default ' ' not null,
  fmnktacc    varchar2(12) default ' ' not null,
  fmnksacc    varchar2(12) default ' ' not null,
  fmnkspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrka1 primary key( 
fmnkrept,
fmnktacc,
fmnksacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
