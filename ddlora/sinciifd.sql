create table sinciiaf
(
  siiiwar     varchar2(5) default ' ' not null,
  siiicat     varchar2(7) default ' ' not null,
  siiipur     varchar2(7) default ' ' not null,
  siiidat     varchar2(8) default ' ' not null,
  siiiqr      number(14,2) default 0 not null,
  siiiqi      number(14,2) default 0 not null,
  siiiuct     number(16,4) default 0 not null,
  siiibat     varchar2(20) default ' ' not null,
  siiispa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciia1 primary key( 
siiiwar,
siiicat,
siiipur,
siiidat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
