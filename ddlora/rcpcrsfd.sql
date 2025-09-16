create table rcpcrsaf
(
  rccrrecn    varchar2(12) default ' ' not null,
  rccruniq    varchar2(3) default ' ' not null,
  rccrcrty    varchar2(3) default ' ' not null,
  rccraccn    varchar2(15) default ' ' not null,
  rccrsamn    number(14,2) default 0 not null,
  rccrsgst    number(14,2) default 0 not null,
  rccrspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpcrsa1 primary key( 
rccrrecn,
rccruniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
