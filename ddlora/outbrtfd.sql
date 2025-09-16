create table outbrtaf
(
  dotbrevn    varchar2(8) default ' ' not null,
  dotbrcnt    varchar2(2) default ' ' not null,
  otbrcode    varchar2(9) default ' ' not null,
  otbrspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbrta1 primary key( 
dotbrevn,
dotbrcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
