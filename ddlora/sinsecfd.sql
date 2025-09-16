create table sinsecaf
(
  sisecon     varchar2(10) default ' ' not null,
  siselin     varchar2(3) default ' ' not null,
  sisecom     varchar2(78) default ' ' not null,
  sisespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinseca1 primary key( 
sisecon,
siselin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
