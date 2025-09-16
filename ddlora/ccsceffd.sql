create table ccscefaf
(
  cceflv1     varchar2(10) default ' ' not null,
  ccefhcd     varchar2(2) default ' ' not null,
  ccefdpt     varchar2(8) default ' ' not null,
  ccefqty     number(14,2) default 0 not null,
  ccefftc     number(14,2) default 0 not null,
  ccefttc     number(14,2) default 0 not null,
  ccefspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscefa1 primary key( 
cceflv1,
ccefhcd,
ccefdpt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscefa2 on ccscefaf
(
ccefhcd,
ccefdpt,
cceflv1
)
  tablespace pas_indx; 
