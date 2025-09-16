create table ibavaraf
(
  dibvrtyp    varchar2(3) default ' ' not null,
  ibvrdesc    varchar2(30) default ' ' not null,
  dibvrfnm    varchar2(5) default ' ' not null,
  ibvrflen    number(3,0) default 0 not null,
  ibvrspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibavard1 primary key( 
dibvrtyp,
ibvrdesc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibavard2 on ibavaraf
(
dibvrtyp,
dibvrfnm
)
  tablespace pas_indx; 
