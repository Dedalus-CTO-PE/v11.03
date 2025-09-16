create table amsaudma
(
  ammaaudd    varchar2(8) default ' ' not null,
  ammaaudt    varchar2(8) default ' ' not null,
  ammaaudp    varchar2(2) default ' ' not null,
  ammaaudr    varchar2(1) default ' ' not null,
  ammaauds    number(1,0) default 0 not null,
  ammaaudo    varchar2(4) default ' ' not null,
  ammareg     varchar2(2) default ' ' not null,
  ammaass     varchar2(12) default ' ' not null,
  ammades     varchar2(35) default ' ' not null,
  ammatyp     varchar2(3) default ' ' not null,
  ammadpt     varchar2(3) default ' ' not null,
  ammabld     varchar2(3) default ' ' not null,
  ammaloc     varchar2(6) default ' ' not null,
  ammalcm     varchar2(30) default ' ' not null,
  ammasdt     varchar2(8) default ' ' not null,
  ammavdt     varchar2(8) default ' ' not null,
  ammarvt     number(14,2) default 0 not null,
  ammasec     number(1,0) default 0 not null,
  ammalea     number(1,0) default 0 not null,
  ammaren     number(1,0) default 0 not null,
  ammapri     number(6,2) default 0 not null,
  ammardt     varchar2(8) default ' ' not null,
  ammaadt     varchar2(4) default ' ' not null,
  ammatdt     varchar2(4) default ' ' not null,
  ammatad     number(14,2) default 0 not null,
  ammaaad     number(14,2) default 0 not null,
  ammagic     varchar2(5) default ' ' not null,
  ammaaqd     varchar2(8) default ' ' not null,
  ammaayr     varchar2(4) default ' ' not null,
  ammaapr     varchar2(2) default ' ' not null,
  ammasof     varchar2(3) default ' ' not null,
  ammaddt     varchar2(8) default ' ' not null,
  ammadyr     varchar2(4) default ' ' not null,
  ammadpr     varchar2(2) default ' ' not null,
  ammadrf     varchar2(15) default ' ' not null,
  ammadty     varchar2(3) default ' ' not null,
  ammadva     number(14,2) default 0 not null,
  ammaaqo     varchar2(8) default ' ' not null,
  ammaaqi     varchar2(15) default ' ' not null,
  ammaser     varchar2(30) default ' ' not null,
  ammacst     number(14,2) default 0 not null,
  ammamanc    varchar2(5) default ' ' not null,
  ammamann    varchar2(30) default ' ' not null,
  ammamanp    varchar2(30) default ' ' not null,
  ammasupc    varchar2(5) default ' ' not null,
  ammasupn    varchar2(30) default ' ' not null,
  ammasupp    varchar2(30) default ' ' not null,
  ammarvr     number(14,2) default 0 not null,
  ammaua1     number(14,2) default 0 not null,
  ammaua2     number(14,2) default 0 not null,
  ammaua3     number(14,2) default 0 not null,
  ammaur1     varchar2(30) default ' ' not null,
  ammaur2     varchar2(30) default ' ' not null,
  ammaur3     varchar2(30) default ' ' not null,
  ammaur4     varchar2(30) default ' ' not null,
  ammaud1     varchar2(8) default ' ' not null,
  ammaud2     varchar2(8) default ' ' not null,
  ammaud3     varchar2(8) default ' ' not null,
  ammaud4     varchar2(8) default ' ' not null,
  ammauc1     varchar2(3) default ' ' not null,
  ammauc2     varchar2(3) default ' ' not null,
  ammauc3     varchar2(3) default ' ' not null,
  ammauc4     varchar2(3) default ' ' not null,
  ammauy1     varchar2(1) default ' ' not null,
  ammauy2     varchar2(1) default ' ' not null,
  ammauy3     varchar2(1) default ' ' not null,
  ammauy4     varchar2(1) default ' ' not null,
  ammaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index amsaudma on amsaudma
(
ammaaudd,
ammaaudt,
ammaaudp,
ammaaudr
)
tablespace pas_indx; 
create table amsmasaf
(
  ammareg     varchar2(2) default ' ' not null,
  ammaass     varchar2(12) default ' ' not null,
  ammades     varchar2(35) default ' ' not null,
  ammatyp     varchar2(3) default ' ' not null,
  ammadpt     varchar2(3) default ' ' not null,
  ammabld     varchar2(3) default ' ' not null,
  ammaloc     varchar2(6) default ' ' not null,
  ammalcm     varchar2(30) default ' ' not null,
  ammasdt     varchar2(8) default ' ' not null,
  ammavdt     varchar2(8) default ' ' not null,
  ammarvt     number(14,2) default 0 not null,
  ammasec     number(1,0) default 0 not null,
  ammalea     number(1,0) default 0 not null,
  ammaren     number(1,0) default 0 not null,
  ammapri     number(6,2) default 0 not null,
  ammardt     varchar2(8) default ' ' not null,
  ammaadt     varchar2(4) default ' ' not null,
  ammatdt     varchar2(4) default ' ' not null,
  ammatad     number(14,2) default 0 not null,
  ammaaad     number(14,2) default 0 not null,
  ammagic     varchar2(5) default ' ' not null,
  ammaaqd     varchar2(8) default ' ' not null,
  ammaayr     varchar2(4) default ' ' not null,
  ammaapr     varchar2(2) default ' ' not null,
  ammasof     varchar2(3) default ' ' not null,
  ammaddt     varchar2(8) default ' ' not null,
  ammadyr     varchar2(4) default ' ' not null,
  ammadpr     varchar2(2) default ' ' not null,
  ammadrf     varchar2(15) default ' ' not null,
  ammadty     varchar2(3) default ' ' not null,
  ammadva     number(14,2) default 0 not null,
  ammaaqo     varchar2(8) default ' ' not null,
  ammaaqi     varchar2(15) default ' ' not null,
  ammaser     varchar2(30) default ' ' not null,
  ammacst     number(14,2) default 0 not null,
  ammamanc    varchar2(5) default ' ' not null,
  ammamann    varchar2(30) default ' ' not null,
  ammamanp    varchar2(30) default ' ' not null,
  ammasupc    varchar2(5) default ' ' not null,
  ammasupn    varchar2(30) default ' ' not null,
  ammasupp    varchar2(30) default ' ' not null,
  ammarvr     number(14,2) default 0 not null,
  ammaua1     number(14,2) default 0 not null,
  ammaua2     number(14,2) default 0 not null,
  ammaua3     number(14,2) default 0 not null,
  ammaur1     varchar2(30) default ' ' not null,
  ammaur2     varchar2(30) default ' ' not null,
  ammaur3     varchar2(30) default ' ' not null,
  ammaur4     varchar2(30) default ' ' not null,
  ammaud1     varchar2(8) default ' ' not null,
  ammaud2     varchar2(8) default ' ' not null,
  ammaud3     varchar2(8) default ' ' not null,
  ammaud4     varchar2(8) default ' ' not null,
  ammauc1     varchar2(3) default ' ' not null,
  ammauc2     varchar2(3) default ' ' not null,
  ammauc3     varchar2(3) default ' ' not null,
  ammauc4     varchar2(3) default ' ' not null,
  ammauy1     varchar2(1) default ' ' not null,
  ammauy2     varchar2(1) default ' ' not null,
  ammauy3     varchar2(1) default ' ' not null,
  ammauy4     varchar2(1) default ' ' not null,
  ammaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsmasa1 primary key( 
ammareg,
ammaass)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsmasa2 on amsmasaf
(
ammabld,
ammaloc,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa3 on amsmasaf
(
ammadpt,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa4 on amsmasaf
(
ammatyp,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa5 on amsmasaf
(
ammasupc,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa6 on amsmasaf
(
ammaaqd,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa7 on amsmasaf
(
ammaddt,
ammareg,
ammaass
)
  tablespace pas_indx; 
create unique index amsmasa8 on amsmasaf
(
ammaadt,
ammareg,
ammaass
)
  tablespace pas_indx; 
