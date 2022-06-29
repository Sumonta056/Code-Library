tring defangIPaddr(string address) {
  return regex_replace(address, regex("[.]"), "[.]");
}