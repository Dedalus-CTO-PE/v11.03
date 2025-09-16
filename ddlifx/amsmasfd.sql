create table amsaudma
(
  ammaaudd    char(8) default ' ' not null,
  ammaaudt    char(8) default ' ' not null,
  ammaaudp    char(2) default ' ' not null,
  ammaaudr    char(1) default ' ' not null,
  ammaauds    decimal(1,0) default 0 not null,
  ammaaudo    char(4) default ' ' not null,
  ammareg     char(2) default ' ' not null,
  ammaass     char(12) default ' ' not null,
  ammades     char(35) default ' ' not null,
  ammatyp     char(3) default ' ' not null,
  ammadpt     char(3) default ' ' not null,
  ammabld     char(3) default ' ' not null,
  ammaloc     char(6) default ' ' not null,
  ammalcm     char(30) default ' ' not null,
  ammasdt     char(8) default ' ' not null,
  ammavdt     char(8) default ' ' not null,
  ammarvt     decimal(14,2) default 0 not null,
  ammasec     decimal(1,0) default 0 not null,
  ammalea     decimal(1,0) default 0 not null,
  ammaren     decimal(1,0) default 0 not null,
  ammapri     decimal(6,2) default 0 not null,
  ammardt     char(8) default ' ' not null,
  ammaadt     char(4) default ' ' not null,
  ammatdt     char(4) default ' ' not null,
  ammatad     decimal(14,2) default 0 not null,
  ammaaad     decimal(14,2) default 0 not null,
  ammagic     char(5) default ' ' not null,
  ammaaqd     char(8) default ' ' not null,
  ammaayr     char(4) default ' ' not null,
  ammaapr     char(2) default ' ' not null,
  ammasof     char(3) default ' ' not null,
  ammaddt     char(8) default ' ' not null,
  ammadyr     char(4) default ' ' not null,
  ammadpr     char(2) default ' ' not null,
  ammadrf     char(15) default ' ' not null,
  ammadty     char(3) default ' ' not null,
  ammadva     decimal(14,2) default 0 not null,
  ammaaqo     char(8) default ' ' not null,
  ammaaqi     char(15) default ' ' not null,
  ammaser     char(30) default ' ' not null,
  ammacst     decimal(14,2) default 0 not null,
  ammamanc    char(5) default ' ' not null,
  ammamann    char(30) default ' ' not null,
  ammamanp    char(30) default ' ' not null,
  ammasupc    char(5) default ' ' not null,
  ammasupn    char(30) default ' ' not null,
  ammasupp    char(30) default ' ' not null,
  ammarvr     decimal(14,2) default 0 not null,
  ammaua1     decimal(14,2) default 0 not null,
  ammaua2     decimal(14,2) default 0 not null,
  ammaua3     decimal(14,2) default 0 not null,
  ammaur1     char(30) default ' ' not null,
  ammaur2     char(30) default ' ' not null,
  ammaur3     char(30) default ' ' not null,
  ammaur4     char(30) default ' ' not null,
  ammaud1     char(8) default ' ' not null,
  ammaud2     char(8) default ' ' not null,
  ammaud3     char(8) default ' ' not null,
  ammaud4     char(8) default ' ' not null,
  ammauc1     char(3) default ' ' not null,
  ammauc2     char(3) default ' ' not null,
  ammauc3     char(3) default ' ' not null,
  ammauc4     char(3) default ' ' not null,
  ammauy1     char(1) default ' ' not null,
  ammauy2     char(1) default ' ' not null,
  ammauy3     char(1) default ' ' not null,
  ammauy4     char(1) default ' ' not null,
  ammaspa     char(30) default ' ' not null,
  lf          char(1)
);
create index amsaudma on amsaudma
(
ammaaudd,
ammaaudt,
ammaaudp,
ammaaudr
);
revoke all on amsaudma from public ; 
grant select on amsaudma to public ; 
create table amsmasaf
(
  ammareg     char(2) default ' ' not null,
  ammaass     char(12) default ' ' not null,
  ammades     char(35) default ' ' not null,
  ammatyp     char(3) default ' ' not null,
  ammadpt     char(3) default ' ' not null,
  ammabld     char(3) default ' ' not null,
  ammaloc     char(6) default ' ' not null,
  ammalcm     char(30) default ' ' not null,
  ammasdt     char(8) default ' ' not null,
  ammavdt     char(8) default ' ' not null,
  ammarvt     decimal(14,2) default 0 not null,
  ammasec     decimal(1,0) default 0 not null,
  ammalea     decimal(1,0) default 0 not null,
  ammaren     decimal(1,0) default 0 not null,
  ammapri     decimal(6,2) default 0 not null,
  ammardt     char(8) default ' ' not null,
  ammaadt     char(4) default ' ' not null,
  ammatdt     char(4) default ' ' not null,
  ammatad     decimal(14,2) default 0 not null,
  ammaaad     decimal(14,2) default 0 not null,
  ammagic     char(5) default ' ' not null,
  ammaaqd     char(8) default ' ' not null,
  ammaayr     char(4) default ' ' not null,
  ammaapr     char(2) default ' ' not null,
  ammasof     char(3) default ' ' not null,
  ammaddt     char(8) default ' ' not null,
  ammadyr     char(4) default ' ' not null,
  ammadpr     char(2) default ' ' not null,
  ammadrf     char(15) default ' ' not null,
  ammadty     char(3) default ' ' not null,
  ammadva     decimal(14,2) default 0 not null,
  ammaaqo     char(8) default ' ' not null,
  ammaaqi     char(15) default ' ' not null,
  ammaser     char(30) default ' ' not null,
  ammacst     decimal(14,2) default 0 not null,
  ammamanc    char(5) default ' ' not null,
  ammamann    char(30) default ' ' not null,
  ammamanp    char(30) default ' ' not null,
  ammasupc    char(5) default ' ' not null,
  ammasupn    char(30) default ' ' not null,
  ammasupp    char(30) default ' ' not null,
  ammarvr     decimal(14,2) default 0 not null,
  ammaua1     decimal(14,2) default 0 not null,
  ammaua2     decimal(14,2) default 0 not null,
  ammaua3     decimal(14,2) default 0 not null,
  ammaur1     char(30) default ' ' not null,
  ammaur2     char(30) default ' ' not null,
  ammaur3     char(30) default ' ' not null,
  ammaur4     char(30) default ' ' not null,
  ammaud1     char(8) default ' ' not null,
  ammaud2     char(8) default ' ' not null,
  ammaud3     char(8) default ' ' not null,
  ammaud4     char(8) default ' ' not null,
  ammauc1     char(3) default ' ' not null,
  ammauc2     char(3) default ' ' not null,
  ammauc3     char(3) default ' ' not null,
  ammauc4     char(3) default ' ' not null,
  ammauy1     char(1) default ' ' not null,
  ammauy2     char(1) default ' ' not null,
  ammauy3     char(1) default ' ' not null,
  ammauy4     char(1) default ' ' not null,
  ammaspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index amsmasa1 on amsmasaf
(
ammareg,
ammaass
);
create unique index amsmasa2 on amsmasaf
(
ammabld,
ammaloc,
ammareg,
ammaass
);
create unique index amsmasa3 on amsmasaf
(
ammadpt,
ammareg,
ammaass
);
create unique index amsmasa4 on amsmasaf
(
ammatyp,
ammareg,
ammaass
);
create unique index amsmasa5 on amsmasaf
(
ammasupc,
ammareg,
ammaass
);
create unique index amsmasa6 on amsmasaf
(
ammaaqd,
ammareg,
ammaass
);
create unique index amsmasa7 on amsmasaf
(
ammaddt,
ammareg,
ammaass
);
create unique index amsmasa8 on amsmasaf
(
ammaadt,
ammareg,
ammaass
);
revoke all on amsmasaf from public ; 
grant select on amsmasaf to public ; 
