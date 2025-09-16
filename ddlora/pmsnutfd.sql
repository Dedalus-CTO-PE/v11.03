create table pmsnutaf
(
  pmnuadmn    varchar2(8) default ' ' not null,
  pmnudate    varchar2(8) default ' ' not null,
  pmnucrtd    varchar2(16) default ' ' not null,
  pmnuupdd    varchar2(16) default ' ' not null,
  pmnucrtu    varchar2(10) default ' ' not null,
  pmnuupdu    varchar2(10) default ' ' not null,
  pmnudtyp    varchar2(3) default ' ' not null,
  pmnuward    varchar2(3) default ' ' not null,
  pmnusize    varchar2(3) default ' ' not null,
  pmnudcde    varchar2(10) default ' ' not null,
  pmnupagn    varchar2(20) default ' ' not null,
  pmnualvl    varchar2(3) default ' ' not null,
  pmnuflui    varchar2(3) default ' ' not null,
  pmnuteat    varchar2(3) default ' ' not null,
  pmnuadtv    varchar2(3) default ' ' not null,
  pmnuvolu    varchar2(3) default ' ' not null,
  pmnuml01    varchar2(3) default ' ' not null,
  pmnuml02    varchar2(3) default ' ' not null,
  pmnuml03    varchar2(3) default ' ' not null,
  pmnuml04    varchar2(3) default ' ' not null,
  pmnuml05    varchar2(3) default ' ' not null,
  pmnuml06    varchar2(3) default ' ' not null,
  pmnuml07    varchar2(3) default ' ' not null,
  pmnuml08    varchar2(3) default ' ' not null,
  pmnuml09    varchar2(3) default ' ' not null,
  pmnuml10    varchar2(3) default ' ' not null,
  pmnustat    number(1,0) default 0 not null,
  pmnubelt    number(1,0) default 0 not null,
  pmnumtyp    number(1,0) default 0 not null,
  pmnuprnt    varchar2(16) default ' ' not null,
  pmnucom1    varchar2(40) default ' ' not null,
  pmnucom2    varchar2(40) default ' ' not null,
  pmnucom3    varchar2(40) default ' ' not null,
  pmnucom4    varchar2(40) default ' ' not null,
  pmnucom5    varchar2(40) default ' ' not null,
  pmnuudf1    varchar2(3) default ' ' not null,
  pmnuudf2    varchar2(3) default ' ' not null,
  pmnuudf3    varchar2(3) default ' ' not null,
  pmnuudf4    varchar2(3) default ' ' not null,
  pmnuudf5    varchar2(3) default ' ' not null,
  pmnufast    varchar2(1) default ' ' not null,
  pmnubsup    varchar2(40) default ' ' not null,
  pmnumsup    varchar2(40) default ' ' not null,
  pmnulsup    varchar2(40) default ' ' not null,
  pmnuasup    varchar2(40) default ' ' not null,
  pmnudsup    varchar2(40) default ' ' not null,
  pmnussup    varchar2(40) default ' ' not null,
  pmnudiet    varchar2(3) default ' ' not null,
  pmnuspar    varchar2(59) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnuta1 primary key( 
pmnuadmn,
pmnudate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsnuta2 on pmsnutaf
(
pmnudate,
pmnuadmn
)
  tablespace pas_indx; 
