DROP TABLE MAP_AddressCache;
CREATE TABLE MAP_AddressCache (
  Address          VARCHAR2(200) NOT NULL,
  Lat              VARCHAR2(20)  DEFAULT NULL,
  Lng              VARCHAR2(20)  DEFAULT NULL,
  PartialMatch     VARCHAR2(20)  DEFAULT NULL,
  FormattedAddress VARCHAR2(200) DEFAULT NULL,
  CacheDateTime    DATE NOT NULL
);
ALTER TABLE MAP_AddressCache ADD CONSTRAINT MAP_AddressCache#0 PRIMARY KEY (Address);
