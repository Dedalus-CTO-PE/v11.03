create table ccsmscaf
(
  ccmsyear    varchar2(4) default ' ' not null,
  ccmscom     varchar2(4) default ' ' not null,
  ccmshcd     varchar2(2) default ' ' not null,
  ccmspcd     varchar2(8) default ' ' not null,
  ccmsuct     number(16,4) default 0 not null,
  ccmsqty     number(14,2) default 0 not null,
  ccmscst     number(14,2) default 0 not null,
  ccmsfix     number(1,0) default 0 not null,
  ccmsfuc     number(16,4) default 0 not null,
  ccmsspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsmsca1 primary key( 
ccmsyear,
ccmscom,
ccmshcd,
ccmspcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
