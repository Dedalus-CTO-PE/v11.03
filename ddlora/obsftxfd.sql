create table obsftxaf
(
  obftvisn    varchar2(8) default ' ' not null,
  obfttype    varchar2(3) default ' ' not null,
  obftline    varchar2(3) default ' ' not null,
  obftdata    varchar2(100) default ' ' not null,
  obftukey    varchar2(24) default ' ' not null,
  obftspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsftxa1 primary key( 
obftvisn,
obfttype,
obftline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
