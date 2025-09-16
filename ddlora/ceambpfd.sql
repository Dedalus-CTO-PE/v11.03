create table ceambpaf
(
  cembmcc     varchar2(9) default ' ' not null,
  cembspc     varchar2(3) default ' ' not null,
  cembpsc     varchar2(7) default ' ' not null,
  cembdqty    number(8,2) default 0 not null,
  cembtqty    number(8,2) default 0 not null,
  cembspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceambpa1 primary key( 
cembmcc,
cembspc,
cembpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
