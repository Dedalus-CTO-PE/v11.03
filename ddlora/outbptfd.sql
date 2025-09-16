create table outbptaf
(
  dotbpevn    varchar2(8) default ' ' not null,
  dotbpcnt    varchar2(2) default ' ' not null,
  otbpcode    varchar2(9) default ' ' not null,
  otbpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbpta1 primary key( 
dotbpevn,
dotbpcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
