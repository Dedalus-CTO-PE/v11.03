create table sinwrkaf
(
  siwkwar     varchar2(5) default ' ' not null,
  siwkrack    varchar2(8) default ' ' not null,
  siwkcat     varchar2(7) default ' ' not null,
  siwkcnt     number(14,2) default 0 not null,
  siwksoh     number(14,2) default 0 not null,
  siwkspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinwrka1 primary key( 
siwkwar,
siwkrack,
siwkcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinwrka2 on sinwrkaf
(
siwkwar,
siwkcat,
siwkrack
)
  tablespace pas_indx; 
