create table fmsxcsaf
(
  fmxcled     varchar2(2) default ' ' not null,
  fmxcsub     varchar2(12) default ' ' not null,
  fmxccos     varchar2(12) default ' ' not null,
  fmxccpr     varchar2(5) default ' ' not null,
  fmxcspr     varchar2(5) default ' ' not null,
  fmxcspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsxcsa1 primary key( 
fmxcled,
fmxcsub,
fmxccos)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsxcsa2 on fmsxcsaf
(
fmxcled,
fmxcsub,
fmxccpr,
fmxccos
)
  tablespace pas_indx; 
create unique index fmsxcsa3 on fmsxcsaf
(
fmxcled,
fmxccos,
fmxcspr,
fmxcsub
)
  tablespace pas_indx; 
